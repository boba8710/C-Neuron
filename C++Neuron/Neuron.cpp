#include "Neuron.h"
#include<stdlib.h>
#include<stdio.h>

Neuron::Neuron(int totalWeights)
{
	this->totalWeights = totalWeights;
	this->weights = new double[totalWeights];
	this->bias = 0;
}


Neuron::~Neuron()
{
	delete weights;
	delete &totalWeights;
	delete &bias;
}

void Neuron::randomizeWeights()
{
	for (int i = 0; i < totalWeights; i++) {
		weights[i] = genRandDouble();
	}
}

void Neuron::randomizeBias()
{
	this->bias = genRandDouble();
}

int Neuron::getInputCount()
{
	return this->totalWeights;
}

double Neuron::getSingleWeight(int index)
{
	return this->weights[index];
}

void Neuron::setSingleWeight(int index, double value)
{
	this->weights[index] = value;
}

void Neuron::neuronPrint()
{
	for (int i = 0; i < totalWeights; i++) {
		printf("%d	:	%f\n",i,weights[i]);
	}
}

double Neuron::genRandDouble()
{
	return (double)rand() / (double)RAND_MAX;
}
