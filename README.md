# edurange-tam
EDURange Tagged Assessment Model Recognizer

# Design

- use sequences of ttylog-derived events, such as particular Unix commands and their flags
- define JSON syntax
- encode sequences in JSON syntax
- mark subsequences as typical of {beginner|professional|expert}, with weights
- the main model is a set of sequences of different parameters

## Inputs

TBD. Specify features / parameters.

## Output

A weighted vector specifying whether the majority of the activity shows Level 1, Level 2, or Level 3 type maturity.

# Version 0 PoC

Write a set of simple Regular Expressions. Run RegExp's over sequences.

# Version 1 ML

Investigate use of TensorFlow, e.g., https://playground.tensorflow.org/#activation=tanh&batchSize=10&dataset=xor&regDataset=reg-plane&learningRate=0.03&regularizationRate=0&noise=0&networkShape=4,8,4,2&seed=0.34847&showTestData=false&discretize=false&percTrainData=50&x=true&y=true&xTimesY=false&xSquared=true&ySquared=false&cosX=false&sinX=false&cosY=false&sinY=false&collectStats=false&problem=classification&initZero=false&hideText=false

