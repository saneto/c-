#include "../include/CPoint.h"

CPoint::CPoint(float c_x, float c_y, float c_z)
{
    m_x = c_x;  m_y = c_y; m_z = c_z;
    m_deplacements = 0;
}

CPoint::~CPoint(){}

void CPoint::deplacer(float d_x, float d_y, float d_z)
{
    m_x += d_x;
    m_y += d_y;
    m_z += d_z;
    m_deplacements++;
}

float CPoint::getX(void)
{   return m_x;     }

float CPoint::getY(void)
{   return m_y;     }

float CPoint::getZ(void)
{   return m_z;     }

int CPoint::getM(void)
{   return m_deplacements;  }
