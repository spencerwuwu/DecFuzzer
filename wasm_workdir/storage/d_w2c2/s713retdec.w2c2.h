#ifndef s713retdec_H
#define s713retdec_H

#include "w2c2_base.h"

typedef struct s713retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s713retdecInstance;

void f0(s713retdecInstance*);

void f1(s713retdecInstance*);

U32 f2(s713retdecInstance*);

void f3(s713retdecInstance*,U32);

void f4(s713retdecInstance*,U32);

void s713retdec____wasm_call_ctors(s713retdecInstance*i);

void s713retdec____wasm_apply_data_relocs(s713retdecInstance*i);

U32 s713retdec_func_1(s713retdecInstance*i);

void s713retdec_call_cb(s713retdecInstance*i,U32 l0);

void s713retdecInstantiate(s713retdecInstance* instance, void* resolve(const char* module, const char* name));

void s713retdecFreeInstance(s713retdecInstance* instance);

#endif /* s713retdec_H */

