#include "OtherEntities.h"

int OtherEntities::m_snail = 0;


int OtherEntities::Snail()
{
	return m_snail;
}

void OtherEntities::Snail(int snail)
{
	m_snail = snail;
}