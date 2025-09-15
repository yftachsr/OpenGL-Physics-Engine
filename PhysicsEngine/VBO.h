#ifndef VBO_H
#define VBO_H

#include<glad/glad.h>
#include<iostream>


class VBO {
public:
	GLuint id;

	VBO(GLfloat*, GLsizeiptr);
	
	void bind();
	void unbind();

	~VBO();
};

#endif // !VBO_CLASS
