#include "TabTemplate.hpp"

UntitledTextEditor::TabTemplate::TabTemplate()
{
}

void UntitledTextEditor::TabTemplate::begin()
{
    beginAutohandle();
    editor.SetLanguageDefinition(TextEditor::LanguageDefinition::CPlusPlus());
}

void UntitledTextEditor::TabTemplate::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

    static std::string lineStr;
    static std::string string;
    static TextEditor editor;
    bool bPreviouslyModified = false;
    if (bModified)
    {
        bPreviouslyModified = true;
        ImGui::PushStyleColor(ImGuiCol_TitleBgActive, { 1.0f, 1.0f, 1.0f, 1.0f });
    }

    ImGui::Begin((openLocation + "###" + mod).c_str(), nullptr, ImGuiWindowFlags_MenuBar);
    if (ImGui::BeginMenuBar())
    {
        if (ImGui::BeginMenu("File"))
        {
            if (ImGui::MenuItem("Save", "CTRL+S"))
            {

            }
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("Saves the file to the location where the file originates from!");
                ImGui::EndTooltip();
            }

            if (ImGui::MenuItem("Save as", "CTRL+SHIFT+S"))
            {

            }
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("Allows to save the file to a different directory from the directory that was opened!");
                ImGui::EndTooltip();
            }

            if (ImGui::MenuItem("Replace with new"))
            {

            }
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("Creates the new file and replaces the tab with the new one!");
                ImGui::EndTooltip();
            }

            if (ImGui::MenuItem("Open in place"))
            {

            }
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("Opens a new file and loads it into the current tab!");
                ImGui::EndTooltip();
            }

            if (ImGui::MenuItem("Open in new tab", "CTRL+SHIFT+T"))
            {

            }
            if (ImGui::IsItemHovered())
            {
                ImGui::BeginTooltip();
                ImGui::Text("Opens the same file in a new tab!");
                ImGui::EndTooltip();
            }
            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Edit"))
        {


            ImGui::EndMenu();
        }
        if (ImGui::BeginMenu("Settings"))
        {

            ImGui::EndMenu();
        }
        ImGui::EndMenuBar();
    }
    editor.Render("Text editor");

    ImGui::End();
    if (bPreviouslyModified)
        ImGui::PopStyleColor();
}

void UntitledTextEditor::TabTemplate::end()
{
    endAutohandle();

}

UntitledTextEditor::TabTemplate::~TabTemplate()
{

}