#pragma once
#include "stdafx.h"
class iVirtualCamera
{
public:
	 iVirtualCamera();
	 ~iVirtualCamera();

public:
	void readObj(char* fileName);
	void getVirtualPoto(float eye[3],float dir[3],float lenLength,char* filename,
		float pixelSize,int x_Width,int y_Heigth, vector<WVector3>& result);

	WScene& getScene(){return m_scene;}

private:
	WObjReader m_reader;
	WScene     m_scene;
	WAccelerator* m_acceletator;
};