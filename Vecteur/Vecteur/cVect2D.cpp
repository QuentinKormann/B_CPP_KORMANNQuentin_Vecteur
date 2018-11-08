#include "cVect2D.h"
#include <math.h>

float cVect2D::getVectX() const
{
	return m_fltX;
}

float cVect2D::getVectY() const
{
	return m_fltY;
}

void cVect2D::setVectX(float fltX)
{
	m_fltX = fltX;
}

void cVect2D::setVectY(float fltY)
{
	m_fltY = fltY;
}

void cVect2D::addiVect(float fltX, float fltY)
{
	m_fltX = m_fltX + fltX;
	m_fltY = m_fltY + fltY;
}

void cVect2D::sousVect(float fltX, float fltY)
{
	m_fltX = m_fltX - fltX;
	m_fltY = m_fltY - fltY;
}

void cVect2D::multiVect(float fltX, float fltY)
{
	m_fltX = m_fltX * fltX;
	m_fltY = m_fltY * fltY;
}

float cVect2D::prodscaVect(float fltX, float fltY)
{
	return (m_fltX * fltY) + (m_fltY * fltX);
}

float cVect2D::normeVect(float fltX, float fltY)
{
	return (float) sqrt(cbrt(fltX - m_fltX) + cbrt(fltY - m_fltY));
}

cVect2D::cVect2D()
{
	m_fltX = 1.0f;
	m_fltY = 1.0f;
}

cVect2D::cVect2D(float fltX, float fltY)
{
	m_fltX = fltX;
	m_fltY = fltY;
}

cVect2D::~cVect2D()
{
}
