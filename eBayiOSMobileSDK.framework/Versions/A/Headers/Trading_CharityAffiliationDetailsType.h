//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"


@class Trading_CharityAffiliationDetailType;

/**
 
 Lists the nonprofit charity organization affiliations for a specified user.
 
 
 @ingroup Trading
*/
@interface Trading_CharityAffiliationDetailsType : NSObject <EbayNs_Bindable> {

@private
    NSMutableArray *charityAffiliationDetail;

}


/**
 
 Indicates the affiliation status for nonprofit charity organizations
 registered with the dedicated eBay Giving Works provider.
 
 
 entry type : class Trading_CharityAffiliationDetailType
*/
@property (nonatomic, retain) NSMutableArray *charityAffiliationDetail;


@end