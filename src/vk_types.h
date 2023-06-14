// vulkan_guide.h : Include file for standard system include files,
// or project specific include files.

#pragma once

#include <vulkan/vulkan.h>

#include <vk_mem_alloc.h>

typedef struct
{
	//Handle to a GPU buffer
	VkBuffer _buffer;
	//Keep in memory the size and who allocated
	VmaAllocation _allocation;

}AllocatedBuffer;

typedef struct
{
	VkImage _image;
	VmaAllocation _allocation;

} AllocatedImage;