#ifndef s786retdec_H
#define s786retdec_H

#include "w2c2_base.h"

typedef struct s786retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s786retdecInstance;

void f0(s786retdecInstance*);

void f1(s786retdecInstance*);

U32 f2(s786retdecInstance*);

void f3(s786retdecInstance*,U32);

U32 f4(s786retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s786retdecInstance*,U32,U32,U32,U32,U32);

void f6(s786retdecInstance*,U32);

void f7(s786retdecInstance*,U32,U32,U32);

void f8(s786retdecInstance*,U32,U32,U32);

void s786retdec____wasm_call_ctors(s786retdecInstance*i);

void s786retdec____wasm_apply_data_relocs(s786retdecInstance*i);

U32 s786retdec_func_1(s786retdecInstance*i);

void s786retdec_call_cb(s786retdecInstance*i,U32 l0);

void s786retdecInstantiate(s786retdecInstance* instance, void* resolve(const char* module, const char* name));

void s786retdecFreeInstance(s786retdecInstance* instance);

#endif /* s786retdec_H */

