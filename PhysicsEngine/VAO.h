#ifndef VAO_H
#define VAO_H

#include "VBO.h"
#include<iostream>


class VAO {
public:
	GLuint id;

	VAO();

	void linkAttrib(VBO&, GLuint, GLuint, GLenum, GLsizeiptr, void*);
	void bind();
	void unbind();
	
	~VAO();
};

#endif // !VAO_H
