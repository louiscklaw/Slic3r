#ifndef PREVIEW3D_HPP
#define PREVIEW3D_HPP
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
    #include <wx/wx.h>
#endif

#include "Settings.hpp"
#include "Model.hpp"
#include "Config.hpp"

namespace Slic3r { namespace GUI {

class Preview3D : public wxPanel {
public:
    void reload_print() {};
    Preview3D(wxWindow* parent, const wxSize& size, std::vector<PlaterObject>& _objects, std::shared_ptr<Model> _model, std::shared_ptr<Config> _config, std::shared_ptr<Settings> _settings) :
    wxPanel(parent, wxID_ANY, wxDefaultPosition, size, wxTAB_TRAVERSAL), objects(_objects), model(_model), config(_config), settings(_settings)
    {}

    void enabled(bool enable = true) {}
private:
    std::vector<PlaterObject>& objects; //< reference to parent vector
    std::shared_ptr<Slic3r::Model> model;
    std::shared_ptr<Slic3r::Config> config;
    std::shared_ptr<Settings> settings;
};

} } // Namespace Slic3r::GUI
#endif