#ifndef ANT_H
#define	ANT_H

class ant
{
public:
	unsigned char player;
	short index;
	short x;
	short y;
	unsigned char depth; //if its in a tunnel, where in the tunnel is it. 0 on surface
	short energy;
	bool carryingFood;
	bool genPhermone;
	short training; //contiguous time it has been training, in timestamps
	short age; //in timestamps
	unsigned char damagePerTime; //how much damage it can do per unit time. increased by training.
	short health;
	
};

#endif	/* ANT_H */

