#ifndef ANTTILE_H
#define	ANTTILE_H

class tile
{
public:
	unsigned char antPlayer;      //the player of the ant on this square
	short antIndex;       //the index of the ant on this square
	bool antPresent;    //true if there is an ant on this square
	short phermoneA;      //how much phermone A there is
	short phermoneB;      //how much phermone B there is
	short food;  	    //how much food there is on a square
	unsigned char tunnelDepth;    //where does the tunnel start. At the surface, or 5 units below it, etc
	unsigned char tunnelDepthLength; //how far down does a tunnel go. 0, 1, or 2.
	bool walkable;
	tile(unsigned char aP, short aI, bool apres, short pA, short pB, short f, unsigned char tD, unsigned char tDL, bool w);
	bool canWalk();
};

#endif	/* ANTTILE_H */

