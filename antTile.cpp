#include "antTile.h"

tile::tile(unsigned char aP, short aI, bool apres, short pA, short pB, short f, unsigned char tD, unsigned char tDL, bool w)
{
	antPlayer=aP;
	antIndex=aI;
	antPresent=apres;
	phermoneA=pA;
	phermoneB=pB;
	food=f;
	tunnelDepth=tD;
	tunnelDepthLength=tDL;
	walkable=w;
}

bool tile::canWalk()
{
	if(antPresent==true) //there's another ant there
		return false;
	return walkable;
}
