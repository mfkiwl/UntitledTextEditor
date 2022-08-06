#include "MainBar.hpp"
#include "Prompts/Open.hpp"

UntitledTextEditor::MainBar::MainBar()
{

}

void UntitledTextEditor::MainBar::begin()
{
    beginAutohandle();

}

void UntitledTextEditor::MainBar::tick(float deltaTime)
{
    tickAutohandle(deltaTime);
    if (ImGui::BeginMainMenuBar())
    {
        if (ImGui::BeginMenu("File"))
        {
            if (ImGui::MenuItem("Open", "CTRL+O"))
            {

            }
            if (ImGui::MenuItem("Save all", "CTRL+ALT+S"))
            {

            }
            if (ImGui::MenuItem("Close all tabs"))
            {

            }
        }
        ImGui::EndMainMenuBar();
    }
    //if (ImGui::BeginMainMenuBar())
    //{
//
    //    if (ImGui::BeginMenu("File"))
    //    {
    //        if (ImGui::MenuItem("Open"));
    //        auto* windowComponent = dynamic_cast<Open*>(UImGui::Instance::getComponentByIDs<UImGui::UIMGUI_COMPONENT_TYPE_WINDOW>("test", 120));
    //        std::cout << windowComponent->name << std::endl;
    //        ImGui::EndMenu();
    //    }
    //    ImGui::EndMainMenuBar();
    //}
}

void UntitledTextEditor::MainBar::end()
{
    endAutohandle();

}

UntitledTextEditor::MainBar::~MainBar()
{

}