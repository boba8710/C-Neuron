#pragma once
class Neuron
{
public:
	Neuron(int totalWeights);
	~Neuron();
	void randomizeWeights();
	void randomizeBias();
	int getInputCount();
	double getSingleWeight(int index);
	void setSingleWeight(int index, double value);
	void neuronPrint();
private:
	int totalWeights;
	double *weights;
	double bias;
	double genRandDouble();
};

