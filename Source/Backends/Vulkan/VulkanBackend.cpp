#include "Backends/Vulkan/VulkanBackend.hpp"

namespace arhi
{

    bool VulkanBackend::InitializeBackend()
    {
        return true;
    }

    void VulkanBackend::ShutdownBackend()
    {

    }

    const char* VulkanBackend::GetBackendName()
    {
        return "Vulkan";
    }

}