/////////////////////////////////////////////////////////////////////////////
// Name:        controls.cpp
// Purpose:     implementation for controls.h
// Author:      Mattia Barbon
// Modified by:
// Created:     29/10/2000
// RCS-ID:      
// Copyright:   (c) 2000 Mattia Barbon
// Licence:     This program is free software; you can redistribute it and/or
//              modify it under the same terms as Perl itself
/////////////////////////////////////////////////////////////////////////////

_wxBitmapButton::_wxBitmapButton( const char* package, wxWindow* parent, 
                                  wxWindowID id,
                                  const wxBitmap& bitmap, const wxPoint& pos,
                                  const wxSize& size, long style,
                                  const wxValidator& validator, 
                                  const wxString name )
    :m_callback( "Wx::BitmapButton" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, bitmap, pos, size, style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxBitmapButton, wxBitmapButton );

_wxButton::_wxButton( const char* package, wxWindow* parent, wxWindowID id, 
                      const wxString& label,
                      const wxPoint& pos, const wxSize& size, long style, 
                      const wxValidator& validator, const wxString& name )
    :m_callback( "Wx::Button" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, label, pos, size, style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxButton, wxButton );

_wxCheckBox::_wxCheckBox( const char* package, wxWindow* parent, 
                          wxWindowID id, const wxString& label, 
                          const wxPoint& pos, const wxSize& size, long style, 
                          const wxValidator& validator, const wxString& name )
    :m_callback( "Wx::CheckBox" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, label, pos, size, style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxCheckBox, wxCheckBox );

_wxCheckListBox::_wxCheckListBox( const char* package, wxWindow* 
                                  parent, wxWindowID id,
                                  const wxPoint& pos, const wxSize& size, 
                                  int n,
                                  const wxString choices[], long style, 
                                  const wxValidator& validator, 
                                  const wxString& name )
    :m_callback( "Wx::CheckListBox" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, pos, size, n, choices, style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxCheckListBox, wxCheckListBox );

_wxChoice::_wxChoice( const char* package, wxWindow* parent, wxWindowID id, 
                      const wxPoint& pos, const wxSize& size, int n,
                      const wxString choices[], long style, 
                      const wxValidator& validator,
                      const wxString& name )
    :m_callback( "Wx::Choice" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, pos, size, n, choices, style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxChoice, wxChoice );

_wxComboBox::_wxComboBox( const char* package, wxWindow* parent, wxWindowID id,
                          const wxString& value, const wxPoint& pos,
                          const wxSize& size, int n, const wxString choices[],
                          long style, const wxValidator& validator, 
                          const wxString& name )
    :m_callback( "Wx::ComboBox" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, value, pos, size, n, choices, style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxComboBox, wxComboBox );

_wxGauge::_wxGauge( const char* package, wxWindow* parent, wxWindowID id,
                    int range, const wxPoint& pos, const wxSize& size,
                    long style, const wxValidator& validator,
                    const wxString &name )
    :m_callback( "Wx::Gauge" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, range, pos, size, style, validator, name );
}

#if defined( __WXMSW__ )

_IMPLEMENT_DYNAMIC_CLASS( _wxGauge, wxGauge95 );

#else

_IMPLEMENT_DYNAMIC_CLASS( _wxGauge, wxGauge );

#endif

_wxListBox::_wxListBox( const char* package, wxWindow* parent, wxWindowID id, 
                        const wxPoint& pos, const wxSize& size, int n,
                        const wxString choices[], long style, 
                        const wxValidator& validator, const wxString& name )
    :m_callback( "Wx::ListBox" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, pos, size, n, choices, style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxListBox, wxListBox );

_wxRadioButton::_wxRadioButton( const char* package, wxWindow* parent, 
                                wxWindowID id,
                                const wxString label, const wxPoint& pos,
                                const wxSize& size, long style,
                                const wxValidator& validator, 
                                const wxString& name )
    :m_callback( "Wx::RadioButton" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, label, pos, size, style, validator, name );    
}

_IMPLEMENT_DYNAMIC_CLASS( _wxRadioButton, wxRadioButton );

_wxRadioBox::_wxRadioBox( const char* package, wxWindow* parent, 
                          wxWindowID id,
                          const wxString& label, const wxPoint& point,
                          const wxSize& size, int n, 
                          const wxString choices[],
                          int majorDimension, long style, 
                          const wxValidator& validator, 
                          const wxString& name )
    :m_callback( "Wx::RadioBox" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, label, point, size, n, choices, majorDimension,
            style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxRadioBox, wxRadioBox );

_wxScrollBar::_wxScrollBar( const char* package, wxWindow* parent, wxWindowID id,
                            const wxPoint& pos, const wxSize& size, long style,
                            const wxValidator& validator, const wxString& name )
    :m_callback( "Wx::ScrollBar" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, pos, size, style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxScrollBar, wxScrollBar );

_wxSpinButton::_wxSpinButton( const char* package, wxWindow* parent, 
                              wxWindowID id,
                              const wxPoint& pos, const wxSize& size,
                              long style, const wxString& name )
    :m_callback( "Wx::SpinButton" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, pos, size, style, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxSpinButton, wxSpinButton );

_wxSpinCtrl::_wxSpinCtrl( const char* package, wxWindow* parent, wxWindowID id,
                          const wxString& value, const wxPoint& pos,
                          const wxSize& size, long style, int min, int max,
                          int initial, const wxString& name )
    :m_callback( "Wx::SpinCtrl" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, value, pos, size, style, min, max, initial, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxSpinCtrl, wxSpinCtrl );

_wxSlider::_wxSlider( const char* package, wxWindow* parent, wxWindowID id,
                      int value, int minValue, int maxValue,
                      const wxPoint& pos, const wxSize& size,
                      long style,
                      const wxValidator& validator, const wxString& name )
    :m_callback( "Wx::Slider" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, value, minValue, maxValue, pos, size, style,
            validator, name );
}

#if defined( __WXMSW_ )

_IMPLEMENT_DYNAMIC_CLASS( _wxSlider, wxSlider95 );

#else

_IMPLEMENT_DYNAMIC_CLASS( _wxSlider, wxSlider );

#endif

_wxStaticBitmap::_wxStaticBitmap( const char* package, wxWindow* parent, 
                                  wxWindowID id, 
                                  const wxBitmap& bitmap,
                                  const wxPoint& pos, const wxSize& size,
                                  long style, const wxString& name )
    :m_callback( "Wx::StaticBitmap" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, bitmap, pos, size, style, name );
}

_wxStaticBitmap::_wxStaticBitmap( const char* package, wxWindow* parent, 
                                  wxWindowID id, 
                                  const wxIcon& icon,
                                  const wxPoint& pos, const wxSize& size,
                                  long style, const wxString& name )
    :m_callback( "Wx::StaticBitmap" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, icon, pos, size, style, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxStaticBitmap, wxStaticBitmap );

_wxStaticBox::_wxStaticBox( const char* package, wxWindow* parent, 
                            wxWindowID id,
                            const wxString& label, const wxPoint& pos,
                            const wxSize& size, long style, 
                            const wxString& name )
    :m_callback( "Wx::StaticBox" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, label, pos, size, style, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxStaticBox, wxStaticBox );

_wxStaticLine::_wxStaticLine( const char* package, wxWindow* parent, 
                              wxWindowID id,
                              const wxPoint& pos,
                              const wxSize& size, long style, 
                              const wxString& name )
    :m_callback( "Wx::StaticLine" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, pos, size, style, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxStaticLine, wxStaticLine );

_wxStaticText::_wxStaticText( const char* package, wxWindow* 
                              parent, wxWindowID id, const wxString& label,
                              const wxPoint& pos, const wxSize& size, 
                              long style, const wxString& name )
    :m_callback( "Wx::StaticText" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, label, pos, size, style, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxStaticText, wxStaticText );

_wxTextCtrl::_wxTextCtrl( const char* package, wxWindow* parent, 
                          wxWindowID id,const wxString& value,
                          const wxPoint& pos, const wxSize& size,
                          long style, const wxValidator& validator, 
                          const wxString& name )
    :m_callback( "Wx::TextCtrl" )
{
    m_callback.SetSelf( _make_object( this, package ), FALSE );
    Create( parent, id, value, pos, size, style, validator, name );
}

_IMPLEMENT_DYNAMIC_CLASS( _wxTextCtrl, wxTextCtrl );

// Local variables: //
// mode: c++ //
// End: //
