local libary = {}

libary:CreateWindow("Ok")

function libary:CreateWindow(Name)
    local Desigh = Instance.new("ScreenGui")
    local TopMain = Instance.new("Frame")
    local Container = Instance.new("Frame")
    local TextButton = Instance.new("TextButton")
    local Title = Instance.new("TextLabel")
    Title.Name = "Title"
    Title.Parent = Container
    Title.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
    Title.BackgroundTransparency = 1.000
    Title.Name = "Title"
    Title.Parent = Container
    Title.BackgroundColor3 = Color3.fromRGB(255, 255, 255)
    Title.BackgroundTransparency = 1.000
    Title.Position = UDim2.new(0, 0, -0.0448717959, 0)
    Title.Size = UDim2.new(0, 85, 0, 21)
    Title.Font = Enum.Font.SourceSansLight
    Title.Text = Name
    Title.TextColor3 = Color3.fromRGB(255, 255, 255)
    Title.TextScaled = true
    Title.TextSize = 14.000
    Title.TextWrapped = true


    local EpicLibary = {}

    function EpicLibary:CreateButton(Text)
    local TextButton = Instance.new("TextButton")

    TextButton.Parent = Container
    TextButton.BackgroundColor3 = Color3.fromRGB(42, 42, 42)
    TextButton.BorderColor3 = Color3.fromRGB(255, 0, 0)
    TextButton.BorderSizePixel = 0
    TextButton.Size = UDim2.new(0, 85, 0, 21)
    TextButton.Font = Enum.Font.SourceSansLight
    TextButton.Text = Text
    TextButton.TextColor3 = Color3.fromRGB(255, 255, 255)
    TextButton.TextSize = 20.000
    TextButton.TextWrapped = true


    end
    return EpicLibary
end

return libary
