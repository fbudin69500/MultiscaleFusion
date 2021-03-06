/*
 * Your License should go here
 */
#ifndef _multiscalefusionconstants_h_
#define _multiscalefusionconstants_h_

#include <QtCore/QString>

/**
* @brief This namespace is used to define some Constants for the plugin itself.
*/
namespace MultiscaleFusionConstants
{
  const QString MultiscaleFusionPluginFile("MultiscaleFusionPlugin");
  const QString MultiscaleFusionPluginDisplayName("MultiscaleFusionPlugin");
  const QString MultiscaleFusionBaseName("MultiscaleFusionPlugin");

  namespace FilterGroups
  {
  	const QString MultiscaleFusionFilters("MultiscaleFusion");
  }
}

/**
* @brief Use this namespace to define any custom GUI widgets that collect FilterParameters
* for a filter. Do NOT define general reusable widgets here.
*/
namespace FilterParameterWidgetType
{
/* const QString SomeCustomWidget("SomeCustomWidget"); */
}
#endif
