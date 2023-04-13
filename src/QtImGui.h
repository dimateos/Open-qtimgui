#pragma once

class QWidget;
class QWindow;

namespace QtImGui {

typedef void* RenderRef;

RenderRef initialize(QWidget *window, bool defaultRender = true);

RenderRef initialize(QWindow *window, bool defaultRender = true);
void newFrame(RenderRef ref = nullptr);
void render(RenderRef ref = nullptr);

// added for our case where the context is deleted
void finalize(RenderRef ref = nullptr);
}
