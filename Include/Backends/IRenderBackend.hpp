#pragma once

namespace arhi
{

    class IRenderBackend
    {
    public:

        virtual bool InitializeBackend() = 0;
        virtual void ShutdownBackend() = 0;

        virtual const char* GetBackendName() = 0;

    };

}