// NeuralNetwork::NeuralNetwork(std::vector<uint> topology, Scalar learningRate);

// void NeuralNetwork::propagateForward(RowVector& input);

// void NeuralNetwork::calcErrors(RowVector& output);

// void NeuralNetwork::updateWeights();

// void NeuralNetwork::propagateBackward(RowVector& output);

Scalar activationFunction(Scalar x);

// void NeuralNetwork::train(std::vector<RowVector*> input_data, std::vector<RowVector*> output_data);

void ReadCSV(std::string filename, std::vector<RowVector*>& data);

void genData(std::string filename);
