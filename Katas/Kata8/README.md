https://www.codingame.com/ide/puzzle/coders-strike-back

The Goal
Win the race.

Rules
The circuit of the race is made up of checkpoints. To complete one lap, your vehicle (pod) must pass through each checkpoints in order and back through the start. The first player to reach the starting checkpoint on the final lap wins.

The pods work as follows:
To pass a checkpoint, the center of a pod must be inside the radius of the checkpoint.
To move a pod, you must print a target destination point followed by a thrust value. Details of the protocol can be found further down.
The thrust value of a pod is its acceleration and must be between 0 and 100.
You can use 1 acceleration boost in the race, you need only replace the thrust value by the BOOST keyword.

BREAKDOWN
We need to win the race, so our bot has to reach the points faster than the opponent.
In order to do so, we are taking in count the thrust (a value between 0 and 100). But, if the angle between our position and the next checkpoint is greater than 90, and we accelerate to the maximum power, we are not going in the right direction. In that case, we need to stop accelerating.
Also we need to take in count the collisions with our opponent, change our trajectory if the collision is moving our bot away the next checkpoint, or permit the collision if it is moving our bot closer to next point. We might do that by decreasing our thrust.