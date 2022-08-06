#pragma once
#include <Framework.hpp>

namespace UntitledTextEditor
{
    class UIMGUI_PUBLIC_API Filesystem : public UImGui::WindowComponent
    {
    public:
        Filesystem();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~Filesystem() override;
    private:

    };
}

