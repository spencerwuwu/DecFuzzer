#ifndef s964retdec_H
#define s964retdec_H

#include "w2c2_base.h"

typedef struct s964retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s964retdecInstance;

void f0(s964retdecInstance*);

void f1(s964retdecInstance*);

U32 f2(s964retdecInstance*);

void f3(s964retdecInstance*,U32);

U32 f4(s964retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s964retdecInstance*,U32,U32,U32,U32,U32);

void f6(s964retdecInstance*,U32);

void f7(s964retdecInstance*,U32,U32,U32);

void f8(s964retdecInstance*,U32,U32,U32);

void s964retdec____wasm_call_ctors(s964retdecInstance*i);

void s964retdec____wasm_apply_data_relocs(s964retdecInstance*i);

U32 s964retdec_func_1(s964retdecInstance*i);

void s964retdec_call_cb(s964retdecInstance*i,U32 l0);

void s964retdecInstantiate(s964retdecInstance* instance, void* resolve(const char* module, const char* name));

void s964retdecFreeInstance(s964retdecInstance* instance);

#endif /* s964retdec_H */

