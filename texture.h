#pragma once

#ifndef TEXTURE_H
#define TEXTURE_H
#include <iostream>
#include <GL\glew.h>
#include "image.h"

using namespace std;

class Texture
{
public:
	Texture(GLenum TextureTarget, string filename);
	void activate(int location, GLenum textureUnit, GLushort unit);
	~Texture(void);
private:
	void init();
	void load();
	GLenum mTarget;
	GLuint mTextureId;
	Image* mImage;
	string mFilename; 
};


#endif