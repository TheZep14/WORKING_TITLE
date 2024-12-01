#ifndef SHADER_H
#define SHADER_H
#include<glad/glad.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>


typedef struct nod
{
	unsigned int source;//Reference to the shader
	struct nod *next;
}TShader;

typedef struct
{
	unsigned int id; //reference to the shader program
	TShader* sources;
}shaderProgram;

//Shader Program creation functions
TShader *createShader(char *filePath,GLenum shaderType);
void addShader(TShader **shaders,char *filePath,GLenum shaderType);
char *loadShaderFile(char* filePath);
shaderProgram createShaderProgram(char *shadersSources[],GLenum types[],int n);
void deleteShaders(TShader **shaders);
void deleteShaderProgram(shaderProgram *program);

//Shader uniforms

#endif
