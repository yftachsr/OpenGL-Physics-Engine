#ifndef VAO_H
#define VAO_H

#include "VBO.h"
#include<iostream>


class VAO {
public:
	GLuint id;

	VAO();

	void linkVBO(VBO&, GLuint);
	void bind();
	void unbind();
	
	~VAO();
};

#endif // !VAO_H
