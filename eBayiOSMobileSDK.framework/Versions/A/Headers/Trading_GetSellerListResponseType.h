//
// Generated by eBay Common SDK Platform, DO NOT CHANGE!
//

#import <Foundation/Foundation.h>
#import "EbayNs_ClassSchema.h"
#import "EbayNs_PropertySchema.h"
#import "EbayNs_BindingConstant.h"
#import "EbayNs_Bindable.h"
#import "Trading_AbstractResponseType.h"


@class Trading_UserType;
@class Trading_PaginationResultType;
@class Trading_ItemArrayType;

/**
 
 Contains a list of the items listed by the seller specified as input. The list of
 items is returned in an ItemArrayType object, in which are returned zero, one, or
 multiple ItemType objects. Each ItemType object contains the detail data for one
 item listing.
 
 
 @ingroup Trading
*/
@interface Trading_GetSellerListResponseType : Trading_AbstractResponseType {

@private
    Trading_PaginationResultType *paginationResult;
    NSNumber *hasMoreItems;
    Trading_ItemArrayType *itemArray;
    NSNumber *itemsPerPage;
    NSNumber *pageNumber;
    NSNumber *returnedItemCountActual;
    Trading_UserType *seller;

}


/**
 
 Contains information regarding the pagination of data (if pagination is
 used), including total number of pages and total number of entries.
 
 
 type : class Trading_PaginationResultType
*/
@property (nonatomic, retain) Trading_PaginationResultType *paginationResult;

/**
 
 If true, there are more items yet to be retrieved. Additional
 GetSellerList calls with higher page numbers or more items per page must
 be made to retrieve these items. Not returned if no items match the
 request.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *hasMoreItems;

/**
 
 Contains the list of the seller's items, one ItemType object per item.
 Returns empty if no items are available that match the request.
 
 
 type : class Trading_ItemArrayType
*/
@property (nonatomic, retain) Trading_ItemArrayType *itemArray;

/**
 
 Indicates the number of items that are being returned per page of data
 (i.e., per call). Will be the same as the value specified in the
 Pagination.EntriesPerPage input. Only returned if items are returned.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *itemsPerPage;

/**
 
 Indicates which page of data was just returned. Will be the same as the
 value specified in the Pagination.PageNumber input. (If the input is
 higher than the total number of pages, the call fails with an error.)
 Only returned if items are returned.
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *pageNumber;

/**
 
 Indicates the total number of items returned (i.e., the number of
 ItemType objects in ItemArray).
 
 
 type : NSNumber, wrapper for primitive int
*/
@property (nonatomic, retain) NSNumber *returnedItemCountActual;

/**
 
 Indicates the seller whose items are returned. The seller is the eBay
 member whose UserID was passed in the request. If UserID was not
 specified, the seller is the user who made the request (identified by
 eBayAuthToken).
 
 
 type : class Trading_UserType
*/
@property (nonatomic, retain) Trading_UserType *seller;


@end
