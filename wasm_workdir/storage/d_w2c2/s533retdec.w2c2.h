#ifndef s533retdec_H
#define s533retdec_H

#include "w2c2_base.h"

typedef struct s533retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s533retdecInstance;

void f0(s533retdecInstance*);

void f1(s533retdecInstance*);

U32 f2(s533retdecInstance*);

void f3(s533retdecInstance*,U32);

U32 f4(s533retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s533retdecInstance*,U32,U32,U32,U32,U32);

void f6(s533retdecInstance*,U32);

void f7(s533retdecInstance*,U32,U32,U32);

void f8(s533retdecInstance*,U32,U32,U32);

void s533retdec____wasm_call_ctors(s533retdecInstance*i);

void s533retdec____wasm_apply_data_relocs(s533retdecInstance*i);

U32 s533retdec_func_1(s533retdecInstance*i);

void s533retdec_call_cb(s533retdecInstance*i,U32 l0);

void s533retdecInstantiate(s533retdecInstance* instance, void* resolve(const char* module, const char* name));

void s533retdecFreeInstance(s533retdecInstance* instance);

#endif /* s533retdec_H */

