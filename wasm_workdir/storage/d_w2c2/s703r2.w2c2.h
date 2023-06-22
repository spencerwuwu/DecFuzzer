#ifndef s703r2_H
#define s703r2_H

#include "w2c2_base.h"

typedef struct s703r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s703r2Instance;

void f0(s703r2Instance*);

void f1(s703r2Instance*);

U32 f2(s703r2Instance*);

void f3(s703r2Instance*,U32);

void f4(s703r2Instance*,U32);

void s703r2____wasm_call_ctors(s703r2Instance*i);

void s703r2____wasm_apply_data_relocs(s703r2Instance*i);

U32 s703r2_func_1(s703r2Instance*i);

void s703r2_call_cb(s703r2Instance*i,U32 l0);

void s703r2Instantiate(s703r2Instance* instance, void* resolve(const char* module, const char* name));

void s703r2FreeInstance(s703r2Instance* instance);

#endif /* s703r2_H */

