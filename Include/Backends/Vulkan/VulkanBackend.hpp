#pragma once

#include "Backends/IRenderBackend.hpp"

namespace arhi
{

    class VulkanBackend : public IRenderBackend
    {

    public:

        bool InitializeBackend() override;
        void ShutdownBackend() override;

        const char* GetBackendName() override;

    };

}