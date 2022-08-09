import tensorflow as tf
data = tf.keras.datasets.fashion_mnist

(training_images, training_labels),(test_images, test_labels) = data.load_data()

training_images = training_images/255.0
test_images = test_images/255.0

model = tf.keras.models.Sequential([
    tf.keras.layers.Flatten()
])