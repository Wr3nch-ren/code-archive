import tensorflow as tf
model = tf.keras.Sequential([
    # recieve input as 28x28 pixels image 
    # and Flatten from 2D array to 1D array
    tf.keras.layers.Flatten(input_shape=(28, 28)),
    
    # Dense to make input and output connected together in 128 neuron
    # more neuron = more parameter (better at memorize, worse at speed)

    # do hypermeter tuning is better than magic number (128 in this case)
    tf.keras.layers.Dense(128, activation=tf.nn.relu),

    # Dense to get answer (in this case, 10)
    tf.keras.layers.Dense(10, activation=tf.nn.softmax)
]
)