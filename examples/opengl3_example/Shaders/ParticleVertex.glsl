#version 400
in vec3 Position;
in vec4 Color;
in vec2 Size;
in float Rotation;
in vec4 TexBlend;
in uvec4 TexArea;

uniform mat4 viewMat;

out Vertex
{
  vec4 color;
  vec2 size;
  float rot;
  vec4 texBlend;
  uvec4 texArea;
} vertex;

void main()
{
  gl_Position = viewMat *  vec4(Position,1.f);
  vertex.color = Color;
  vertex.size = Size;
  vertex.rot = Rotation;
  vertex.texBlend = TexBlend;
  vertex.texArea = TexArea;
}
