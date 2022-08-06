#pragma once
#include <Framework.hpp>

namespace UntitledTextEditor
{
    class UIMGUI_PUBLIC_API HexEditor : public UImGui::WindowComponent
    {
    public:
        HexEditor();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~HexEditor() override;
    private:

    };
}

