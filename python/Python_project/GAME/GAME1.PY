import cv2
import mediapipe as mp
import numpy as np

# Initialize Mediapipe hands
mp_hands = mp.solutions.hands
hands = mp_hands.Hands(static_image_mode=False, max_num_hands=1, min_detection_confidence=0.5, min_tracking_confidence=0.5)
mp_drawing = mp.solutions.drawing_utils

# Define rose image
rose_image = cv2.imread("rose.png")  # Replace "rose.png" with the path to your rose image

# Function to draw the rose on the hand
def draw_rose(image, hand_landmarks):
    # Get the index finger tip coordinates
    index_finger_tip = hand_landmarks.landmark[mp_hands.HandLandmark.INDEX_FINGER_TIP]
    x = int(index_finger_tip.x * image.shape[1])
    y = int(index_finger_tip.y * image.shape[0])

    # Resize the rose image to fit the hand
    rose_resized = cv2.resize(rose_image, (int(image.shape[1] * 0.2), int(image.shape[0] * 0.2)))

    # Overlay the rose on the hand
    image[y - rose_resized.shape[0] // 2:y + rose_resized.shape[0] // 2,
          x - rose_resized.shape[1] // 2:x + rose_resized.shape[1] // 2] = rose_resized

    return image

# Capture video from webcam
cap = cv2.VideoCapture(0)

while True:
    success, image = cap.read()
    image = cv2.flip(image, 1)  # Flip the image horizontally

    # Convert the image to RGB
    image_rgb = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

    # Process the image with Mediapipe hands
    results = hands.process(image_rgb)

    # Draw hand landmarks
    if results.multi_hand_landmarks:
        for hand_landmarks in results.multi_hand_landmarks:
            mp_drawing.draw_landmarks(image, hand_landmarks, mp_hands.HAND_CONNECTIONS)

            # Draw the rose on the hand
            image = draw_rose(image, hand_landmarks)

    # Display the output
    cv2.imshow("Rose on Hand", image)

    # Exit on pressing 'q'
    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# Release resources
cap.release()
cv2.destroyAllWindows()
