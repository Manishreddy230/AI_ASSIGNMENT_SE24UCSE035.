# AI_ASSIGNMENT_SE24UCSE035.
CODES FOR THE AI ASSIGNMENT 2

Turing Test and CAPTCHA
Problem Statement

The Turing Test, proposed by Alan Turing, is a method used to determine whether a machine can exhibit intelligent behavior that is indistinguishable from that of a human. In this test, a human evaluator communicates with both a human and a machine through a text interface. If the evaluator cannot reliably identify which one is the machine, the machine is said to have passed the Turing Test.

A CAPTCHA (Completely Automated Public Turing Test to Tell Computers and Humans Apart) is a security mechanism used in web applications to differentiate between human users and automated bots. It presents challenges such as text recognition, image selection, or simple arithmetic problems that humans can easily solve but are difficult for automated programs.

Objective

The objective is to understand how machines can be tested for intelligent behavior and how CAPTCHA systems help protect applications from automated attacks.

Working Principle

The Turing Test checks whether the responses of a machine resemble human responses.

CAPTCHA verifies whether the user is human by presenting a challenge that requires human cognitive ability.

Applications

Web security systems

Online form verification

Prevention of spam and automated attacks

AI evaluation systems

Q2. Simple Reflex Agent for AQI Monitoring
Problem Statement

A Simple Reflex Agent is an AI agent that makes decisions based only on the current percept (input from the environment). It uses predefined condition-action rules to determine the appropriate response.

In this problem, environmental parameters such as PM2.5, PM10, CO, NO2, and SO2 are taken as input from sensors (represented through a file). The agent processes these values and determines the Air Quality Index (AQI) of the region.

Objective

To design a simple reflex agent that reads environmental parameters from sensors and determines the air quality category.

Working Principle

Sensors collect environmental parameters.

The agent reads the data.

The agent applies predefined rules to determine the AQI category.

The system outputs the air quality status.

AQI Categories

Typical AQI classifications include:

AQI Range	Category
0–50	Good
51–100	Moderate
101–150	Unhealthy for Sensitive Groups
151–200	Unhealthy
201–300	Very Unhealthy
301+	Hazardous
Applications

Environmental monitoring systems

Smart city pollution monitoring

Weather and air quality forecasting systems

Q3. Missionaries and Cannibals Problem
Problem Statement

The Missionaries and Cannibals problem is a classical Artificial Intelligence search problem.

Three missionaries and three cannibals are on the left bank of a river. They must cross the river using a boat that can carry at most two people at a time. The goal is to transfer everyone safely to the right bank while ensuring that cannibals never outnumber missionaries on either bank.

Constraints

The boat can carry at most two people.

At least one person must operate the boat.

If the number of cannibals exceeds the number of missionaries on either side of the river, the missionaries will be eaten.

The objective is to move everyone safely to the right bank.

Initial State
(3 Missionaries, 3 Cannibals, Boat on Left Bank)
Goal State
(0 Missionaries, 0 Cannibals, Boat on Right Bank)
Search Algorithms Used

The following uninformed search algorithms are used to solve the problem:

Breadth First Search (BFS)

Depth First Search (DFS)

Depth Limited Search (DLS)

Iterative Deepening Depth First Search (IDDFS)

Uniform Cost Search (UCS)

Time and Space Complexity Comparison

Let:

b = branching factor

d = depth of solution

m = maximum depth

l = depth limit

Algorithm	Time Complexity	Space Complexity
BFS	O(b^d)	O(b^d)
DFS	O(b^m)	O(bm)
DLS	O(b^l)	O(bl)
IDDFS	O(b^d)	O(bd)
UCS	O(b^d)	O(b^d)
Comparison of Search Methods
Algorithm	Complete	Optimal	Memory Usage
BFS	Yes	Yes	High
DFS	No	No	Low
DLS	No	No	Low
IDDFS	Yes	Yes	Moderate
UCS	Yes	Yes	High
Conclusion

Breadth First Search guarantees an optimal solution but requires more memory. Depth First Search uses less memory but may explore unnecessary deep paths. Depth Limited Search restricts the depth of exploration, while Iterative Deepening combines the advantages of BFS and DFS. Uniform Cost Search guarantees optimal solutions when costs vary but consumes more memory.
