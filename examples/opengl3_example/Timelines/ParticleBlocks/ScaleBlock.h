#pragma once
#include "../Block.h"
#include "glm/vec3.hpp"

class ScaleBlock :
	public Block
{
public:

	/* Parameters
	*/
	glm::vec2 _scaleBegin, _scaleEnd;

	ScaleBlock(TimeInterval t);
	virtual ~ScaleBlock();

	virtual void applyParticle(float emittTime, Particle &part, GPUParticle &gpuPart);

	virtual void DrawProperties(ImVec2 pos, ImVec2 size);
};

