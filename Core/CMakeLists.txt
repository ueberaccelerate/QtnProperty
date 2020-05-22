project (Core)

add_library( Core STATIC
PropertyBase.cpp 
Property.cpp 
PropertySet.cpp 
Enum.cpp 
QObjectPropertySet.cpp 
Core/PropertyBool.cpp 
Core/PropertyInt.cpp 
Core/PropertyUInt.cpp 
Core/PropertyFloat.cpp 
Core/PropertyDouble.cpp 
Core/PropertyQString.cpp 
Core/PropertyQRect.cpp 
Core/PropertyQRectF.cpp 
Core/PropertyEnum.cpp 
Core/PropertyEnumFlags.cpp 
Core/PropertyQSize.cpp 
Core/PropertyQSizeF.cpp 
Core/PropertyQPoint.cpp 
Core/PropertyQPointF.cpp 
GUI/PropertyQColor.cpp 
GUI/PropertyQPen.cpp 
GUI/PropertyQBrush.cpp 
GUI/PropertyButton.cpp 
GUI/PropertyQFont.cpp

CoreAPI.h
PropertyBase.h 
Property.h
PropertySet.h
Enum.h
QObjectPropertySet.h 
PropertyCore.h 
PropertyGUI.h 
Auxiliary/PropertyTemplates.h 
Auxiliary/PropertyMacro.h 
Auxiliary/PropertyAux.h 
Auxiliary/PropertyDelegateInfo.h 
Core/PropertyBool.h 
Core/PropertyInt.h 
Core/PropertyUInt.h 
Core/PropertyFloat.h 
Core/PropertyDouble.h 
Core/PropertyQString.h 
Core/PropertyQRect.h 
Core/PropertyQRectF.h 
Core/PropertyEnum.h 
Core/PropertyEnumFlags.h 
Core/PropertyQSize.h 
Core/PropertyQSizeF.h 
Core/PropertyQPoint.h 
Core/PropertyQPointF.h 
GUI/PropertyQColor.h 
GUI/PropertyQPen.h 
GUI/PropertyQBrush.h 
GUI/PropertyButton.h 
GUI/PropertyQFont.h
)

target_link_libraries( Core PRIVATE Qt5::Widgets Qt5::Core)
