//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "FindingService_BaseFindingServiceResponse.h"


@class FindingService_ConditionHistogramContainer;
@class FindingService_CategoryHistogramContainer;
@class FindingService_AspectHistogramContainer;

/**
 
 Response container for the findItemsByKeywords call.
 
 
 @ingroup FindingService
*/
@interface FindingService_FindItemsByKeywordsResponse : FindingService_BaseFindingServiceResponse {

@private
    FindingService_CategoryHistogramContainer *categoryHistogramContainer;
    FindingService_AspectHistogramContainer *aspectHistogramContainer;
    FindingService_ConditionHistogramContainer *conditionHistogramContainer;

}


/**
 
 Response container for category histograms. Only returned when one or
 more category histograms are returned. A category histogram is not
 returned if the search query returns no matching items.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 When searching the eBay Motors site, category histograms may not be
 available for some parent categories. In these cases, aspect
 histograms should be used to refine search results. This behavior
 is consistent with eBay Motors site search behavior.
 </span>
 
 
 type : class FindingService_CategoryHistogramContainer
*/
@property (nonatomic, retain) FindingService_CategoryHistogramContainer *categoryHistogramContainer;

/**
 
 Response container for aspect histograms.
 
 
 type : class FindingService_AspectHistogramContainer
*/
@property (nonatomic, retain) FindingService_AspectHistogramContainer *aspectHistogramContainer;

/**
 
 Reserved for future use.
 
 
 type : class FindingService_ConditionHistogramContainer
*/
@property (nonatomic, retain) FindingService_ConditionHistogramContainer *conditionHistogramContainer;


@end
