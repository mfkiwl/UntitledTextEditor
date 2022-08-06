#pragma once
#include <Framework.hpp>

namespace UntitledTextEditor
{
    class UIMGUI_PUBLIC_API Terminal : public UImGui::WindowComponent
    {
    public:
        Terminal();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~Terminal() override;
    private:

    };
}

