#pragma once
#include <Framework.hpp>

namespace UntitledTextEditor
{
    class UIMGUI_PUBLIC_API Instance : public UImGui::Instance
    {
    public:
        Instance();
        virtual void begin() override;
        virtual void tick(float deltaTime) override;
        virtual void end() override;
        virtual ~Instance() override;

        virtual void onEventConfigureStyle(ImGuiStyle& style, ImGuiIO& io) override;
    private:

    };
}

