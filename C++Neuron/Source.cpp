#include <stdio.h>
#include "Neuron.h"
#include <vector>
#include <chrono>
#include <thread>
using namespace std;
int main() {
	std::chrono::milliseconds ms =std::chrono::duration_cast< std::chrono::milliseconds >(
		std::chrono::system_clock::now().time_since_epoch()
	);
	srand(ms.count());
	srand(rand());	//that ought to do it.
	Neuron *n = new Neuron(10);
	n->randomizeWeights();
	n->randomizeBias();
	n->neuronPrint();
	std::this_thread::sleep_for(std::chrono::milliseconds(1000));
}