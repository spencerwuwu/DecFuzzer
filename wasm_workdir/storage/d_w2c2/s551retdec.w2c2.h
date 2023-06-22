#ifndef s551retdec_H
#define s551retdec_H

#include "w2c2_base.h"

typedef struct s551retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s551retdecInstance;

void f0(s551retdecInstance*);

void f1(s551retdecInstance*);

U32 f2(s551retdecInstance*);

void f3(s551retdecInstance*,U32);

U32 f4(s551retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s551retdecInstance*,U32,U32,U32,U32,U32);

void f6(s551retdecInstance*,U32);

void f7(s551retdecInstance*,U32,U32,U32);

void f8(s551retdecInstance*,U32,U32,U32);

void s551retdec____wasm_call_ctors(s551retdecInstance*i);

void s551retdec____wasm_apply_data_relocs(s551retdecInstance*i);

U32 s551retdec_func_1(s551retdecInstance*i);

void s551retdec_call_cb(s551retdecInstance*i,U32 l0);

void s551retdecInstantiate(s551retdecInstance* instance, void* resolve(const char* module, const char* name));

void s551retdecFreeInstance(s551retdecInstance* instance);

#endif /* s551retdec_H */

