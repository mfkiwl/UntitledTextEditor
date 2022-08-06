#pragma once
#include <Framework.hpp>
#include "ThirdParty/TextEditor.hpp"

namespace UntitledTextEditor
{

    class UIMGUI_PUBLIC_API TabTemplate : public UImGui::WindowComponent
    {
    public:
        TabTemplate();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~TabTemplate() override;
    private:
        TextEditor editor;
        std::string openLocation = "NewFile";
        char mod = ' ';
        bool bModified = true;
    };
}

