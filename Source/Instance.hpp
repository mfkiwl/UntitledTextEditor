#pragma once
#include <Framework.hpp>
#include <Prompts/Prompts.hpp>
#include <Windows/Windows.hpp>
#include "MainBar.hpp"

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
        About about{};
        Exit exit{};
        Open open{};
        Save save{};

        Filesystem filesystem{};
        HexEditor hexEditor{};
        Settings settings{};
        TabTemplate tabTemplate{};
        Terminal terminal{};

        MainBar mainBar{};
    };
}

