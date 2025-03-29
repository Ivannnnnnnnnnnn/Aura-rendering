-- 2D.lua - Lua module for 2D rendering in Aura

local Renderer = {}

-- Set draw color (R, G, B, A)
function Renderer.setColor(r, g, b, a)
    aura_set_color(r, g, b, a or 255)
end

-- Draw a rectangle (x, y, width, height, filled)
function Renderer.drawRect(x, y, width, height, filled)
    aura_draw_rect(x, y, width, height, filled)
end

-- Draw a circle (x, y, radius, filled)
function Renderer.drawCircle(x, y, radius, filled)
    aura_draw_circle(x, y, radius, filled)
end

-- Draw a line (x1, y1, x2, y2)
function Renderer.drawLine(x1, y1, x2, y2)
    aura_draw_line(x1, y1, x2, y2)
end

return Renderer
