#include "Instance.hpp"

UntitledTextEditor::Instance::Instance()
{

}

void UntitledTextEditor::Instance::begin()
{
    beginAutohandle();

}

void UntitledTextEditor::Instance::tick(float deltaTime)
{
    tickAutohandle(deltaTime);

}

void UntitledTextEditor::Instance::end()
{
    endAutohandle();

}

UntitledTextEditor::Instance::~Instance()
{

}

void UntitledTextEditor::Instance::onEventConfigureStyle(ImGuiStyle& style, ImGuiIO& io)
{

}

